
// implementation of babylonian algorithm
double babylonian(double x)
{
  double root = 0.0;

  double r, iGuess, nGuess;
  iGuess=x/2; //value of initial 'guess'
  nGuess=iGuess;

  if(x <= 0)
  {
    return 0;
  }

  do
  {
    r=x/nGuess;

    nGuess=(nGuess+r)/2;

  }while (nGuess>(0.00000000000000001+((nGuess+x/nGuess)/2.0)));

  root = nGuess;
  return root;
}
