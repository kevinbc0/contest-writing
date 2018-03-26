for n in {1..25}
do
python3 gen.py > tests/input/input`printf %02d $n`.txt
./ac/run < tests/input/input`printf %02d $n`.txt > tests/output/output`printf %02d $n`.txt
done
