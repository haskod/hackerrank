import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);

    int t1, t2, n;
    t1 = in.nextInt();
    t2 = in.nextInt();
    n = in.nextInt();

    BigInteger[] f = new BigInteger[n + 1];
    f[1] = BigInteger.valueOf(t1);
    f[2] = BigInteger.valueOf(t2);

    for (int i = 3; i <= n; i++)
      f[i] = f[i - 2].add(f[i - 1].pow(2));

    System.out.println(f[n]);
  }
}
