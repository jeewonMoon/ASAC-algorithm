import java.io.*;
import java.lang.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException{
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
    int n = Integer.parseInt(br.readLine());
    String star = new String("*");

    for (int i=1; i<=n; i++) {
        bw.write(star+"\n");
        star+="*";
    }
    br.close();
    bw.flush();
    bw.close();
    }
}