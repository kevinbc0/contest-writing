for n in {0..12}
do
# echo $n
java Solution < tests/input/input`printf %02d $n`.txt > tests/output/output`printf %02d $n`.txt
done
