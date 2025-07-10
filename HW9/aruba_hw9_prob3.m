v1 = rand(1,10^6)*1.0-0.5
histogram(v1,40)
%%
v2 = rand(1,10^6)*1.0-0.5
histogram(v1+v2,40)
%%
v3 = rand(1,10^6)*1.0-0.5
histogram(v1+v2+v3, 40)
%%
v4 = rand(1,10^6)*1.0-0.5
v5 = rand(1,10^6)*1.0-0.5
v6 = rand(1,10^6)*1.0-0.5
histogram(v1+v2+v3+v4+v5+v6,40)
