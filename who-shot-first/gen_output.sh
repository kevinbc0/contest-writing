for n in {0..13}
do
# echo $n
python3 solution.py < tests/input/input`printf %02d $n`.txt > tests/output/output`printf %02d $n`.txt
done
