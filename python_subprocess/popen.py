import subprocess

p = subprocess.Popen("lscpu", stdout=subprocess.PIPE, stderr=subprocess.STDOUT)

print "test"

out,err = p.communicate()

print out
