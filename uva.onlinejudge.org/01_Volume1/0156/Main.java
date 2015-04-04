/**
 *  156 - Ananagrams
 *  RunTime : 0.162
 */

import java.io.*;
import java.util.*;

class Main {
	static final boolean	DEBUG = false;
	static InputStream	is;
	
	Main (InputStream inputStream) {
		is = inputStream;
	}
	
	static String ReadLine (int size) {
        byte line[] = new byte [size];
        int len = 0, cur = -1; 

        try {
            while (len < size) {
                cur = is.read();
                if ((cur < 0) || (cur == '\n')) break;
                line [len++] += cur;
            }   
        }   
        catch (IOException e) {
            return (null);
        }   

        if ((cur < 0) && (len == 0)) return (null);  // eof
        return (new String (line, 0, len));
    }   

    public static void main (String args[]) {
    	InputStream	inputStream = System.in;
    	if (DEBUG) {
	    	if (args.length > 0) {
	    		try {
	    			inputStream = new FileInputStream(new File(args[0]));
	    		} catch (FileNotFoundException e) {
	    			// TODO Auto-generated catch block
	    			e.printStackTrace();
	    		}
	    	}
    	}
    	
    	Main myWork = new Main(inputStream);
        myWork.Begin();
    }
    
    void Begin() {
        String input;
        StringTokenizer token;
        Map<String, String>	map = new HashMap<String, String>();
        
        while ((input = Main.ReadLine (255)) != null) {
            token = new StringTokenizer (input);
            while (token.hasMoreTokens()) {
            	String	value = token.nextToken();
            	//String	key = value.toLowerCase().chars().sorted()
            	//		.collect(StringBuilder::new, StringBuilder::appendCodePoint, StringBuilder::append)
            	//		.toString();
            	char[]	arr = value.toLowerCase().toCharArray();
            	Arrays.sort(arr);
            	String	key = new String(arr);
            	if (value.equals("#")) {
            		Print(map);
            		return;	
            	}
            	if (map.containsKey(key)) {
            		map.put(key, "#");
            	} else {
            		map.put(key, value);
            	}
            }   
        }
    }
    
    void Print(Map<String, String> map) {
    	Set<String>	set = new TreeSet<String>();
    	for (String key : map.keySet()) {
    		if (map.get(key).equals("#"))	continue;
    		set.add(map.get(key));
    	}
    	for (Object object:set)
    		System.out.println((String)object);
    }
}
