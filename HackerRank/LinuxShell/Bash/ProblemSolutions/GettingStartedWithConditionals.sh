read x;
if [[ $x == N || $x == n ]]
then 
    echo "NO"
elif [[ $x == Y || $x == y ]]
then 
    echo "YES"
else
    echo "Incorrect Character"
fi