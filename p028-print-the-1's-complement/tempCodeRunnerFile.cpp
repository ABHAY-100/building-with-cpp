void complement(int num){
  int rem;
  if(num<=1){
    cout<<!num;
    return;
  }
  rem = num%2;
  complement(num/2);
  cout<<!rem;
}