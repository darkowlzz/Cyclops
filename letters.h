//"letter.h"
//contains some functions required by the main program


//to find length of a word
int length(int a)  {
  int i=0;
  while(a>0)  {
    a = a/10;
    i++;
  }
  return i;
}

//converts passed characters to braille codes
int conv(char x)  {
  switch(x)  {
    case 'a': return 1;
    case 'b' : return 12;
    case 'c' : return 14;
    case 'd' : return 145;
    case 'e' : return 15;
    case 'f' : return 124;
    case 'g' : return 1245;
    case 'h' : return 125;
    case 'i' : return 24;
    case 'j' : return 245;
    case 'k' : return 13;
    case 'l' : return 123;
    case 'm' : return 134;
    case 'n' : return 1345;
    case 'o' : return 135;
    case 'p' : return 1234;
    case 'q' : return 12345;
    case 'r' : return 1235;
    case 's' : return 234;
    case 't' : return 2345;
    case 'u' : return 136;
    case 'v' : return 1236;
    case 'w' : return 2456;
    case 'x' : return 1346;
    case 'y' : return 13456;
    case 'z' : return 1356;
    default: return 0;
  }
}



