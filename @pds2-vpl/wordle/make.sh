source_file="wordle.cpp"
executable="exec"

compile_command="g++ -o $executable $source_file"
execute_command="./$executable"

echo "Compilando $source_file..."
if $compile_command; then
    echo "Compilação bem-sucedida."
    echo "Executando $executable..."
    $execute_command
else
    echo "Erro durante a compilação."
fi
