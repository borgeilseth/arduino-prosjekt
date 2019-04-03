
void commando (char input) {
  switch (input) {
    case '0':
      stopp();
      break;
    case '1': //Left
      svingV();
      break;
    case '2': //Up
      fram();
      break;
    case '3': //Right
      svingH();
      break;
    case '4': //Down
      bak();
      break;
    case '5': //Function 1
      // statements
      break;
    case '6': //function 2
      // statements
      break;
    case 's': //square
      // statements
      break;
    case 't': //triangle
      // statements
      break;
    case 'x': //X
      tuting();
      break;
    case 'c': //circle
      // statements
      break;
    case 'o':
      stopp();
      noTone(speaker);
      break;
  }
}
