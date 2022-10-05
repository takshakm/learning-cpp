#include<iostream>
#include<vector>
using namespace std;
int main(){
    //vector<char>vowels;   EMPTY
    //vector<char>vowels(5);    5 initialized to zero
    vector<char>vowels{'a','e','i','o','u'};
    cout<<vowels[0]<<endl;
    cout<<vowels[4]<<endl<<endl;
    //vector<int>test_scores(3)     3 elements all initialized to zero
    //vector<int>test_scores(3,100);     3 elements all initialized to 100
    vector<int>test_scores{100,98,89};
    cout<<"Test scores using array syntax"<<endl;
    cout<<test_scores[0]<<endl;
    cout<<test_scores[1]<<endl;
    cout<<test_scores[2]<<endl<<endl;
    
    
    //vector syntax
    cout<<"Test scores using vector syntax"<<endl;  
    cout<<test_scores.at(0)<<endl;
    cout<<test_scores.at(1)<<endl;
    cout<<test_scores.at(2)<<endl;
    cout<<"there are "<<test_scores.size()<<" scores in the vector"<<endl;

    cout<<"enter 3 test scores ";
    cin>>test_scores.at(0);
    cin>>test_scores.at(1);
    cin>>test_scores.at(2);

    cout<<"updated test scores"<<endl;
    cout<<test_scores.at(0)<<endl;
    cout<<test_scores.at(1)<<endl;
    cout<<test_scores.at(2)<<endl;

    //adding to the vector
    cout<<"enter a score to add to the test scores "<<endl;
    int score_added;
    cin>>score_added;
    test_scores.push_back(score_added);

    cout<<"enter another score to add to the test scores "<<endl;
    int score_added1;
    cin>>score_added1;
    test_scores.push_back(score_added1);

    cout<<"test scores are now "<<endl;
    cout<<test_scores.at(0)<<endl;
    cout<<test_scores.at(1)<<endl;
    cout<<test_scores.at(2)<<endl;
    cout<<test_scores.at(3)<<endl;
    cout<<test_scores.at(4)<<endl;
    cout<<"size of vector is "<<test_scores.size()<<endl;

// 2 Dimentional Vectors ============================================IMP REVISION!!!!!!!!!
    vector<vector<int>>movie_ratings
    {
        {1,2,3,4},
        {1,2,4,4},
        {1,3,4,5}
    };
    cout<<"movie rating for reviewer #1 using array syntax "<<endl;
    cout<<movie_ratings[0][0]<<endl;
    cout<<movie_ratings[0][1]<<endl;
    cout<<movie_ratings[0][2]<<endl;
    cout<<movie_ratings[0][3]<<endl<<endl;

    cout<<"movie rating for reviewer #2 using vector syntax "<<endl;
    cout<<movie_ratings.at(0).at(0)<<endl;
    cout<<movie_ratings.at(0).at(1)<<endl;
    cout<<movie_ratings.at(0).at(2)<<endl;
    cout<<movie_ratings.at(0).at(3)<<endl<<endl;

    return 0;    
}