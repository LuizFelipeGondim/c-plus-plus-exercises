source_file="wordle.cpp"
executable="exec"

compile_command="g++ -o $executable $source_file"
execute_command="./$executable"

if $compile_command; then
    $execute_command
else
    echo "Erro durante a compilação."
fi
