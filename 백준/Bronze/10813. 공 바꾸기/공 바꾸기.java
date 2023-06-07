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
            int a =Integer.parseInt(st.nextToken());
            int b =Integer.parseInt(st.nextToken());
            
            if (a==b) continue;
            
            int tmp = arr[a-1];
            arr[a-1]=arr[b-1];
            arr[b-1]=tmp;
        }

        for (int i=0;i<n;i++) {
            bw.write(arr[i]+" ");
        }

        br.close();
        bw.flush();
        bw.close();
    }
}