%Kalman
A = 1; %zhuangtaizhuanyijuzhen 
H=0.2; %guancejuzhen
X(1)=0; %mubiaozhuangtaixiangliang
%V(1)=0;
Y(1)=1;
P(1)=10;
N=200;
V=randn(1,N); %guochengzaosheng
W=randn(1,N);

for k=2:N
    X(k)=A*X(k-1)+V(k-1);
end

Q=std(V)^2;
R=std(W)^2;
Z=H*X+W

for t=2:N
    P(t)=A*P(t-1)+Q;
    S(t)=H^2*P(t)+R;
    K(t)=H*P(t)/S(t);
    v(t)=Z(t)-(A*H*Y(t-1));
    Y(t)=A*Y(t-1)+K(t)*v(t);
    P(t)=(1-H*K(t))*P(t);
end

t = 1:N;
plot(t,Y,'r',t,Z,'g',t,X,'b');
legend('Kalman','Look','Plan');