* {
  background-color: #000000;
  border-color: #E6E6E6;
  text-color: #8ca0aa;
  spacing: 0;
  width: 400px;
  height: 370px;
}

window{
  border: 1px;
  border-color:#151515;
  width: 400px;
  height: 380px;

}

inputbar {
  border: 0 0 1px 0;
  children: [prompt,entry];
}


prompt {
  padding: 2px;
  border: 0 1px 0 0;
  text-color: #55094D;
}

textbox {
  background-color: #2e343f;
  border: 0 0 1px 0;
  border-color: #282C33;
  padding: 8px 10px;
}

entry {
  padding: 10px;
}

listview {
  cycle: false;
  margin: 0 0 -1px 0;
  scrollbar: false;
}


element {
  border: 0 0 1px 0;
  padding: 8px;
}
element-icon {
	size: 20px;
	border: 0;
}

element selected {
  background-color: #55094D;
}