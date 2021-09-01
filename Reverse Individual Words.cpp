//Reverse Individual Words 
void printWords(string str)
{
    string word;

    stringstream iss(str);
 
    while (iss >> word)
    {
        reverse(word.begin(),word.end());
        cout<<word<<" ";
    }
}
