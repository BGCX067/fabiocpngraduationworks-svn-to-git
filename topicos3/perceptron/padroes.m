%mostra os pesos
for i = 1:63
    padr(1,i)=N0(i);
end
for i = 1:63
    padr(2,i)=N1(i);
end
for i = 1:63
    padr(3,i)=N2(i);
end
for i = 1:63
    padr(4,i)=N3(i);
end
for i = 1:63
    padr(5,i)=N4(i);
end
for i = 1:63
    padr(6,i)=N5(i);
end
for i = 1:63
    padr(7,i)=N6(i);
end
for i = 1:63
    padr(8,i)=N7(i);
end
for i = 1:63
    padr(9,i)=N8(i);
end
for i = 1:63
    padr(10,i)=N9(i);
end




for j = 1:10
    for i = 1:63
        if padr(j,i) == 0
            padr(j,i)='.';
        else
            padr(j,i)='#';
        end
    end
end

% imprimir de A a D

fprintf('\n')
for j = 1:10
fprintf ('  %c%c%c%c%c%c%c',padr(j,1),padr(j,10),padr(j,19),padr(j,28),padr(j,37),padr(j,46),padr(j,55))
end
fprintf('\n');
for j = 1:10
fprintf ('  %c%c%c%c%c%c%c',padr(j,2),padr(j,11),padr(j,20),padr(j,29),padr(j,38),padr(j,47),padr(j,56))
end
fprintf('\n');
for j = 1:10
fprintf ('  %c%c%c%c%c%c%c',padr(j,3),padr(j,12),padr(j,21),padr(j,30),padr(j,39),padr(j,48),padr(j,57))
end
fprintf('\n');
for j = 1:10
fprintf ('  %c%c%c%c%c%c%c',padr(j,4),padr(j,13),padr(j,22),padr(j,31),padr(j,40),padr(j,49),padr(j,58))
end
fprintf('\n');
for j = 1:10
fprintf ('  %c%c%c%c%c%c%c',padr(j,5),padr(j,14),padr(j,23),padr(j,32),padr(j,41),padr(j,50),padr(j,59))
end
fprintf('\n');
for j = 1:10
fprintf ('  %c%c%c%c%c%c%c',padr(j,6),padr(j,15),padr(j,24),padr(j,33),padr(j,42),padr(j,51),padr(j,60))
end
fprintf('\n');
for j = 1:10
fprintf ('  %c%c%c%c%c%c%c',padr(j,7),padr(j,16),padr(j,25),padr(j,34),padr(j,43),padr(j,52),padr(j,61))
end
fprintf('\n');
for j = 1:10
fprintf ('  %c%c%c%c%c%c%c',padr(j,8),padr(j,17),padr(j,26),padr(j,35),padr(j,44),padr(j,53),padr(j,62))
end
fprintf('\n');
for j = 1:10
fprintf ('  %c%c%c%c%c%c%c',padr(j,9),padr(j,18),padr(j,27),padr(j,36),padr(j,45),padr(j,54),padr(j,63))
end
fprintf('\n');
fprintf('\n');
