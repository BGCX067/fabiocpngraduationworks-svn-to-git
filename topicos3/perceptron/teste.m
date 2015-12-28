
%for j = 1:10
%    for i = 1:63
%        w(i,j)
%    end
%end


x= [0 1 1 1 1 1 0;
    0 0 0 0 0 1 0;
    0 1 0 0 0 1 1;
    0 0 0 1 0 1 0;
    1 0 0 0 0 1 0;
    0 0 1 0 0 1 0;
    0 0 1 0 0 1 0;
    1 0 1 1 0 1 0;
    0 0 0 0 0 1 0];




%calcular a soma para uma entrada
for j = 1:10
    u(j) = bias(j);
    for i = 1:63
        u(j) = u(j) + w(i,j)*x(i);
    end
    % calculo da saida
    y(j) = 1;
    if u(j) < 0 
        y(j) = 0;
    end
end    

%fprintf('\n');
fprintf('O valor de y(0) = %g\n',y(10));
for i = 1:9
    fprintf('O valor de y(%g) = %g\n',i,y(i));
end