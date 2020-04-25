#Static
$y=96;
sub func1{
    return $y;
}
sub static{
    my $y=69; 
    return func1();
}

print "Statc: ", static(). "\n";
