#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include<string.h>


static uint32_t table[256];  

//位逆转
static uint32_t bitrev(uint32_t input, int bw ) {
	int i;
	uint32_t var;
	var = 0;
	for (i = 0; i < bw; i++) {
		if (input & 0x01) {
			var |= 1 << (bw - 1 - i);
		}
		input >>= 1;
	}
	return var;
}
	
	 
	//码表生成
void crc32_init(uint32_t poly) {
	int i;
	int j;
	uint32_t c;
	poly = bitrev(poly, 32);
	printf("%x::::", poly);
	for (i = 0; i < 256; i++) 
	{
		c = i;
		for (j = 0; j < 8; j++)
		{
			c = (c & 1) ? (poly ^ (c >> 1)) : (c >> 1);
		}
		table[i] = c;
		printf("0x%x ", table[i]);
	}

}
	
	
	//计算CRC
	uint32_t crc32(uint32_t crc, uint8_t* input, int len) {
		int i;
		uint8_t index;
		uint8_t *p;
		p = (uint8_t*)input;
		for (i = 0; i < len; i++)
		{
			index = (*p ^ crc);
			crc = (crc >> 8) ^ table[index];
			p++;
		}
		return crc;
	}

	//解密
	uint32_t deco(uint32_t mi) {
		uint32_t temp = mi ^ 0xFFFFFFFF;
		int i = 0;
		while (temp != table[i]) {
			i++;
		}
		return 0;
	} 


	//测试用例
	int main() {
		uint32_t crc;
		crc32_init(0x4C11DB7);
		char space[] = "*abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789{}_.";
		char m[4];
		for (int i = 0; space[i] != '\0'; i++) {
			for (int j = 0; space[j] != '\0'; j++) {
				for (int k = 0; space[k] != '\0'; k++) {
					for (int y = 0; space[y] != '\0'; y++) {
						m[0] = space[i];
						m[1] = space[j];
						m[2] = space[k];
						m[3] = space[y];
						crc = crc32(0xFFFFFFFF, (uint8_t*)m, 4)^ 0xFFFFFFFF;
						if (crc == 0x20135f4d ||crc== 0x04505985||crc== 0xd0dbdec9||crc == 0x531b4b7f || crc == 0x0aea5617 || crc == 0xfc287aaa || crc == 0xdc8aa6d6 || crc == 0xfb56b20c) {
							printf("CRC32 = 0x%x:%c%c%c%c\n", crc, m[0], m[1], m[2], m[3]);
						}
					}
				}
			}
		}
		system("pause");
	}
