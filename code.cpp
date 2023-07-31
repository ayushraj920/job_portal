import java.util.*; 
import java.io.*;

class Main {  
  public static String SimpleSymbols(String str) { 
  String tru = "true";
  String fal = "false";
   // char[] str1 = str.toCharArray();
   for(int i = 0 ; i<str.length() ; i++){
       if(str.charAt(i)<='z'&&str.charAt(i)>='A'){
        if(i==0){
        return fal;
        }
           if(str.charAt(i-1)=='+'&&str.charAt(i+1)=='+')
           return tru;
       }
      
   }
    
     return fal;
  } 
  
  public static void main (String[] args) {  
    // keep this function call here     
    Scanner s = new Scanner(System.in);
    System.out.print(SimpleSymbols(s.nextLine())); 
  }   
  
}