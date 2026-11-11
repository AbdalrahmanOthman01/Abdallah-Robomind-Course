// this is a single line comment
/*
this is multi line comment
*/
//how to make a var ?
// type varname = data;
int number = 6;
// what are the datatypes i can use in arduino c ?
// https://docs.arduino.cc/language-reference/#variables

// Declare an array of a given length without initializing the values:
int myInts[6];

// Declare an array without explicitly choosing a size (the compiler
// counts the elements and creates an array of the appropriate size):
int myPins[] = {2, 4, 8, 3, 6, 4};

// Declare an array of a given length and initialize its values:
int mySensVals[5] = {2, 4, -8, 3, 2};

// When declaring an array of type char, you'll need to make it longer
// by one element to hold the required the null termination character:
char message[6] = "hello";
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
