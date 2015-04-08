/**
 *  10699 - 오늘 날짜
 *  https://www.acmicpc.net/problem/10699
 */

import java.io.*;
import java.util.*;
import java.text.*;

class Main {

    public static void main (String args[]) {
        SimpleDateFormat    format = new SimpleDateFormat("yyyy-MM-dd");
        System.out.println (format.format(new Date()));
    }
}
