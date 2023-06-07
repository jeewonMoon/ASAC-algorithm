import java.io.*;
import java.lang.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st;
        int n = Integer.parseInt(br.readLine());
        int[] arr = new int[n];
        int cnt=0;
        
        st = new StringTokenizer(br.readLine());
        for (int i=0;i<n;i++) {
            arr[i]=Integer.parseInt(st.nextToken());
        }
        
        int v = Integer.parseInt(br.readLine());
        
        for (int i=0;i<n;i++) {
            if (arr[i]==v) cnt++;
        }
        bw.write(cnt+"\n");
        
        br.close();
        bw.flush();
        bw.close();
    }
}