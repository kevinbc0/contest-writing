for n in {1..10}
do
python3 gen.py > tests/input/input`printf %02d $n`.txt
python3 kevin.py < tests/input/input`printf %02d $n`.txt > tests/output/output`printf %02d $n`.txt
done
