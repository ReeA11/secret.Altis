private["_Array","_Gang"];
if(GodsGangs isEqualTo [])exitWith{[]};
_Array = [];
_Gang = [];
{_Array pushBack(_x select 1)}foreach GodsGangs;
{if((_x select 1)isEqualTo(selectMax _Array))then{_Gang = _x}}foreach GodsGangs;
_Gang