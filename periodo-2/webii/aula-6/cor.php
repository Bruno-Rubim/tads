<?php




$color = 'white';

if (isset($_POST['color'])) {
    $color = $_POST['color'];
}

print('<body style="background-color: ' . $color . '">');

switch ($color){
    case 'white':
        print('This place looks lame... throw some color into it!<br><br>');
    break;
    case 'Tomato':
        print('Damn that looks good! Makes me wanna throw in some salt and eat it!<br><br>');
        print('');
    break;
}

print('    <form method="POST" action="cor.php">');
print('        <select name="color">');
print('            <option value="">--Selecione a cor---</option>');
print('            <option value="Tomato">Tomato</option>');
print('            <option value="Orange">Orange</option>');
print('            <option value="DodgerBlue">Dodger Blue</option>');
print('            <option value="MediumSeaGreen">Medium Sea Green</option>');
print('            <option value="Gray">Gray</option>');
print('            <option value="SlateBlue">Slate Blue</option>');
print('            <option value="Violet">Violet</option>');
print('            <option value="LightGray">Light Gray</option>');
print('        </select>');
print('        <br><br>');
print('        <button type="submit">Enviar</button>');
print('    </form>');
print('</body>');

?>

<!--
Tomato
Orange
DodgerBlue
MediumSeaGreen
Gray
SlateBlue
Violet
LightGray