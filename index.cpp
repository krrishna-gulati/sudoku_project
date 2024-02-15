<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Techie's Code : Sudoku Solver</title>
    <link rel="stylesheet" href="style.css">
</head>

<body>
    <div class="Header">
        <div id="logo">
            <img src="./logo.png" alt="Techies Code" srcset="">
        </div>
        <div id="name">Techie's Code</div>
    </div>
    <div class="Heading">Sudoku Solver</div>
    <div class="sudoku_grid">
        <div id="0" class="box1 bl bt"></div>
        <div id="1" class="box1 bt"></div>
        <div id="2" class="box1 br bt"></div>
        <div id="3" class="box2 bt"></div>
        <div id="4" class="box2 bt"></div>
        <div id="5" class="box2 br bt"></div>
        <div id="6" class="box3 bt"></div>
        <div id="7" class="box3 bt"></div>
        <div id="8" class="box3 br bt"></div>
        <div id="9" class="box1 bl"></div>
        <div id="10" class="box1"></div>
        <div id="11" class="box1 br"></div>
        <div id="12" class="box2"></div>
        <div id="13" class="box2"></div>
        <div id="14" class="box2 br"></div>
        <div id="15" class="box3"></div>
        <div id="16" class="box3"></div>
        <div id="17" class="box3 br"></div>
        <div id="18" class="box1 bb bl"></div>
        <div id="19" class="box1 bb"></div>
        <div id="20" class="box1 br bb"></div>
        <div id="21" class="box2 bb"></div>
        <div id="22" class="box2 bb"></div>
        <div id="23" class="box2 br bb"></div>
        <div id="24" class="box3 bb"></div>
        <div id="25" class="box3 bb"></div>
        <div id="26" class="box3 bb br"></div>
        <div id="27" class="box1 bl"></div>
        <div id="28" class="box1"></div>
        <div id="29" class="box1 br"></div>
        <div id="30" class="box2"></div>
        <div id="31" class="box2"></div>
        <div id="32" class="box2 br"></div>
        <div id="33" class="box3"></div>
        <div id="34" class="box3"></div>
        <div id="35" class="box3 br"></div>
        <div id="36" class="box1 bl"></div>
        <div id="37" class="box1"></div>
        <div id="38" class="box1 br"></div>
        <div id="39" class="box2"></div>
        <div id="40" class="box2"></div>
        <div id="41" class="box2 br"></div>
        <div id="42" class="box3"></div>
        <div id="43" class="box3"></div>
        <div id="44" class="box3 br"></div>
        <div id="45" class="box1 bb bl"></div>
        <div id="46" class="box1 bb"></div>
        <div id="47" class="box1 br bb"></div>
        <div id="48" class="box2 bb"></div>
        <div id="49" class="box2 bb"></div>
        <div id="50" class="box2 br bb"></div>
        <div id="51" class="box3 bb"></div>
        <div id="52" class="box3 bb"></div>
        <div id="53" class="box3 bb br"></div>
        <div id="54" class="box1 bl"></div>
        <div id="55" class="box1"></div>
        <div id="56" class="box1 br"></div>
        <div id="57" class="box2"></div>
        <div id="58" class="box2"></div>
        <div id="59" class="box2 br"></div>
        <div id="60" class="box3"></div>
        <div id="61" class="box3"></div>
        <div id="62" class="box3 br"></div>
        <div id="63" class="box1 bl"></div>
        <div id="64" class="box1"></div>
        <div id="65" class="box1 br"></div>
        <div id="66" class="box2"></div>
        <div id="67" class="box2"></div>
        <div id="68" class="box2 br"></div>
        <div id="69" class="box3"></div>
        <div id="70" class="box3"></div>
        <div id="71" class="box3 br"></div>
        <div id="72" class="box1 bb bl"></div>
        <div id="73" class="box1 bb"></div>
        <div id="74" class="box1 br bb"></div>
        <div id="75" class="box2 bb"></div>
        <div id="76" class="box2 bb"></div>
        <div id="77" class="box2 br bb"></div>
        <div id="78" class="box3 bb"></div>
        <div id="79" class="box3 bb"></div>
        <div id="80" class="box3 bb br"></div>
    </div>

    <div class="Buttons">
        <button id="GetPuzzle"> GetPuzzle </button>
        <button id="SolvePuzzle"> SolvePuzzle </button>
    </div>

    <script src="./Script.js"></script>
</body>

</html>