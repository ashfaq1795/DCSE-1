clc
clear all
close all
userprompt= '????';
titlebar= 'Text to speach';
string= 'i am computer system engineer';
userinput=inputdlg(userprompt ,titlebar, 1, {string});
if isempty(userinput)
    return;
end
userinput=char(userinput);
NET.addAssembly('System.Speech');
obj=System.Speech.Synthesis.SpeechSynthesizer;
obj.Volume=100;
Speak(obj,userinput);