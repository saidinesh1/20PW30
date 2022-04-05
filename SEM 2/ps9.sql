set serveroutput on
begin
for c in (select e.pizza from eats e inner join person p on e.e_name=p.p_name where p.gender='female' and p.age>20)
  loop
    dbms_output.put_line(c.pizza);
  end loop;
end;