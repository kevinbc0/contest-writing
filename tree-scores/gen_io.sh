for n in {1..9}
do
java Solution < tests/input/input`printf %02d $n`.txt > tests/output/output`printf %02d $n`.txt
done
