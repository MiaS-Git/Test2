#Dynamic
$x=420;
sub func1{
    return $x;
}
sub dynamic{
    local $x=69; 
    return func1();
}

print "Dynamic: ", dynamic(). "\n";
