
%um padrao de entrada 

%calcular a soma para uma entrada
u = bias;
for i = 1:63
    u = u + w(i)*x(i);
end
% calculo da saida
y = 1;
if u < 0 
    y = 0;
end
% calculo do erro
e = d - y;

% ajuste dos pesos
for i = 1:63
    w(i) = w(i) + alfa*e*x(i);
end

bias = bias + alfa*e;



