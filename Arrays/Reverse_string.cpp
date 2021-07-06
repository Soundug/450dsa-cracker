//Problem link: https://practice.geeksforgeeks.org/problems/reverse-a-string/1

string reverseWord(string str){
    
  //Your code here
  int start=0;
  int end = str.length() - 1;
  char temp;
  
  for(; start<=end; start++)
  {
      temp = str[start];
      str[start] = str[end];
      str[end] = temp;
      end--;
  }
  
  return str;
}
