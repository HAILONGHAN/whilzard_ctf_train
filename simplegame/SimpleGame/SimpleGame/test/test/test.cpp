// test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
#include<string.h>
#include<iostream>


signed int test(char *input_0)
{
	signed int i; // ebx
	unsigned int v2; // edx
	const char *input; // esi
	int ch_i; // ecx
	unsigned int row; // esi
	int v6; // ecx
	unsigned int col; // ecx
	int v8; // esi
	int index; // edi
	int *list; // ebx
	signed int k; // ecx
	int *cot_l; // edx
	unsigned int aim; // [esp+Ch] [ebp-Ch]
	signed int j; // [esp+10h] [ebp-8h]
	const char *input_1; // [esp+14h] [ebp-4h]
	int dword_403020[] = { 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0, 0, 0x0F, 0x0F, 0x0F, 0, 0, 0, 0,0x0F, 0,0x0F,0x0F, 0x0F, 0,0x0F, 0x0F,0x0F, 0x0F, 0, 0, 0x0F, 0, 0, 0, 0, 0x0F, 0x0F, 0x0F, 0,0x0F, 0, 0x0F, 0, 0, 0x0F, 0, 0x0F,0x0F, 0x0F, 0x0F, 0,0x0F, 0x0F, 0, 0
		,0x0F, 0, 0x0F,0x0F, 0, 0,0x0F, 0, 0, 0, 0, 0x0F, 0x0F, 0x0F, 0, 0, 0, 0,0x0F, 0,0x0F, 0x0F, 0x0F, 0x0F, 0x0F,0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0, 0, 0 };
	char dword_403170[20] = "dssdwasawawaaswddw";
	char unk_4021A0[] = { 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0
		, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0
		,0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
		,0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3,0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0
		,0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0
		,0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
		,5, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 5, 0, 0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
		,0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 2,0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
		,0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 7, 0, 0, 0, 0, 0
		,0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0x42, 0, 0, 0, 0x42, 0, 0, 0, 0x42, 0, 0, 0, 0x42, 0, 0, 0, 0x48, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0  ,  0   , 0, 0 };

	input_1 = input_0;
	i = 0;
	aim = 0;
	for (int g = 0; g < 81; g++) {
		if (g % 9 == 0) {
			printf("\n");
		}
		printf("%x  ", dword_403020[g]);
		
	}


	input = input_0;
	while (1)
	{
		ch_i = input[i];
		if (ch_i != dword_403170[i / 2])
			return -1;
		switch (ch_i)
		{
		case 'a':
			col = 'd' - input[i + 1];
			goto LABEL_14;
		case 'd':
			col = input[i + 1] - 94;
		LABEL_14:
			v8 = input[i + 2];
			if (v8 != dword_403170[(i + 2) / 2])
				return -1;
			if (v8 == 's')
			{
				row = input_1[i + 3] - 95;
			}
			else
			{
				if (v8 != 'w')
					return -1;
				row = 99 - input_1[i + 3];
			}
		LABEL_19:
			if (row > 5 || col > 5)
				return -1;
			j = 0;
			index =  col + 9 * row;
		
				list = (int *)((char *)&unk_4021A0 + 64 * (i / 4));
			
			do
			{
				k = 0;
				cot_l = list;
				do
				{
					if (*cot_l)
					{
						if (dword_403020[index + k])
							return -1;
						dword_403020[index + k] = *cot_l;
					}
					++k;
					++cot_l;
				} while (k < 4);
				list += 4;
				index += 9;
				++j;
			} while (j < 4);
			input = input_1;
			aim += 4;
			i = aim;
			if (aim >= strlen(input_1))
				return 1;
			break;
		case 's':
			row = input[i + 1] - 95;
			goto LABEL_6;
		case 'w':
			row = 99 - input[i + 1];
		LABEL_6:
			v6 = input_1[i + 2];
			if (v6 != dword_403170[(i + 2) / 2])
				return -1;
			if (v6 == 97)
			{
				col = 'd' - input_1[i + 3];
			}
			else
			{
				if (v6 != 'd')
					return -1;
				col = input_1[i + 3] - 94;
			}
			goto LABEL_19;
		default:
			return -1;
		}
	}
}

int main() {
	char my[40];
	std::cin >> my;
	test(my);

	return 0;
}

