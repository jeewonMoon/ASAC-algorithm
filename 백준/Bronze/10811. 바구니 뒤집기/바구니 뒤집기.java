import java.io.*;
import java.lang.*;
import java.util.*;


public class Main {
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st;

        st = new StringTokenizer(br.readLine());
        int n = Integer.parseInt(st.nextToken());
        int m = Integer.parseInt(st.nextToken());
        int[] arr = new int[n];

        for (int i=0;i<n;i++) {
            arr[i]=i+1;
        }

        for (int i=0;i<m;i++) {
            st = new StringTokenizer(br.readLine());
            int s =Integer.parseInt(st.nextToken());
            int e =Integer.parseInt(st.nextToken());

            if (s==e) continue;

            while(s<e) {
                int tmp = arr[s-1];
                arr[s-1]=arr[e-1];
                arr[e-1]=tmp;
                s++;
                e--;
            }
        }

        for (int i=0;i<n;i++) {
            bw.write(arr[i]+" ");
        }

        br.close();
        bw.flush();
        bw.close();
    }
}