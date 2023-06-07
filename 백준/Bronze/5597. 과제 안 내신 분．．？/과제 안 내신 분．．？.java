import java.io.*;
import java.lang.*;
import java.util.*;


public class Main {
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int[] arr = new int[30];

        for (int i=0;i<28;i++) {
            int n =Integer.parseInt(br.readLine());
            arr[n-1]=1;
        }
        for (int i=0;i<30;i++) {
            if (arr[i]!=1) {
                bw.write((i+1)+"\n");
            }
        }

        br.close();
        bw.flush();
        bw.close();
    }
}