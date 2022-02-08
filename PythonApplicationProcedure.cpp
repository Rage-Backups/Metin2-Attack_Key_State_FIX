//Keress rá erre a funkcióra:
LRESULT CPythonApplication::WindowProcedure(HWND hWnd, UINT uiMsg, WPARAM wParam, LPARAM lParam)
 
//A funkción belül ez alá:
m_SoundManager.SaveVolume();
 
//Illeszd be ezt:
m_pyPlayer.SetAttackKeyState(false);
 
http://epvpimg.com/yW5udab
