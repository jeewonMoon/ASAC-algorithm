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
        
        for (int i=0;i<m;i++) {
            st = new StringTokenizer(br.readLine());
            int s =Integer.parseInt(st.nextToken());
            int e =Integer.parseInt(st.nextToken());
            int k =Integer.parseInt(st.nextToken());
            
            for (int j=s-1;j<e;j++) {
                arr[j]=k;
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