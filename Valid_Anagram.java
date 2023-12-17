import java.util.*;
import java.util.Arrays; 
import java.util.Collections; 
public class Valid_Anagram {
    public boolean isAnagram(String s, String t) {
        if(s.length()!=t.length()){
            return false;
        }
        int map[]=new int[26];
        for(char x : s.toCharArray()){
            map[x-'a']++;
        }
        for(char x : t.toCharArray()){
            map[x-'a']--;
        }
        for(int i:map){
            if (i!=0){
                return false;
            }
        }
        return true;
        }
    }
public static void main(String args[]) { 
 
   String s = "anagram";
   String t = "nagaram";
if(isAnagram(s , t)) 
            System.out.println("The two strings are"
                               + " anagram of each other"); 
        else
            System.out.println("The two strings are not"
                               + " anagram of each other"); 
    } 

