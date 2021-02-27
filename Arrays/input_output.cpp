using namespace std;

int main() {
    int arr[10];
    int n=10;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    cout<<"Array elements are:\n";
    for(int i=0;i<n;i++)
    {
        cout<<i<<"th element is "<<arr[i]<<"\n";
    }
    return 0;
}
