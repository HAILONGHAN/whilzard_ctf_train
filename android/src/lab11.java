public class lab11 {
    public static byte[] B;

    public static int b(int arg4) {
        int v0 = arg4 & 181;
        return ((((v0 & 1) + ((v0 & 4) >> 2)) + ((v0 & 16) >> 4)) + ((v0 & 32) >> 5)) + ((v0 & 128) >> 7);
    }

    public static boolean check(String s) {
        if (s.length() != 10) {
            return false;
        }
        byte[] A = new byte[30];
        B = s.getBytes();
        for (int i = 0; i < B.length; i++) {
            A[i] = B[i];
        }
        int[] v0 = new int[]{40, 42, 65, 67, 42, 65, 67, 2, 64, 70, 96, 98, 181, 7, 10, 64, 23, 17, 37, 20, 45, 91, 74, 72, 135, 33, 57, 43, 87, 99, 147, 33, 57, 33, 57, 43, 87, 53};
        for(int i:v0){
            System.out.print(b(i));
        }
        byte[] v5 = new byte[]{(byte) 72, (byte) 50, (byte) 110, (byte) 50, (byte) 107, (byte) 90, (byte) 99, (byte) 70, (byte) 60, (byte) 80};
        int v2 = 0;
        int v4 = 0;
        int v7 = 0;
        int v1 = 0;
        while (v1 < v0.length) {
            switch (b(v0[v1])) {
                case 0:
                    A[v7] = (byte) (A[v7] ^ v7);
                    break;
                case 1:
                    if (A[v4] == (byte) 0) {
                        break;
                    }
                    v4++;
                    break;
                case 2:
                    v5[v4] = (byte) (v5[v4] ^ v4);
                    System.out.println(v5[v7]+" "+v4);
                    v4++;
                    break;
                case 3:
                    if (v5[v7] != A[v7]) {
                        System.out.println(v5[v7]+" "+A[v7]);
                        break;
                    }
                    v7++;
                    break;
                case 4:
                    if (v7 == v4) {
                        return true;
                    }
                    return false;
                case 5:
                    if (v4 == v5.length) {
                        v4 = 0;
                        break;
                    }
                    v1 = v0.length - 1;
                    break;
                case 6:
                    if (v4 == v5.length) {
                        v4 = 0;
                        break;
                    }
                    v1 = v0.length - 9;
                    break;
                default:
                    v2++;
                    break;
            }
            v1++;
        }
        System.out.println("\n"+v1);
        return false;
    }

    public static void main(String args[]){
        String m="H3l1o_eA4Y";
        lab11 my = new lab11();
        if(my.check(m)){
            System.out.println("OK！");
        }else{
            System.out.println("\nWrong");
        }
    }

}

