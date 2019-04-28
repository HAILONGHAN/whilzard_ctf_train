'''
Created on Dec 14, 2011

@author: pablocelayes
'''

import ContinuedFractions, Arithmetic, RSAvulnerableKeyGenerator

def hack_RSA(e,n):
    '''
    Finds d knowing (e,n)
    applying the Wiener continued fraction attack
    '''
    frac = ContinuedFractions.rational_to_contfrac(e, n)
    convergents = ContinuedFractions.convergents_from_contfrac(frac)
    
    for (k,d) in convergents:
        
        #check if d is actually the key
        if k!=0 and (e*d-1)%k == 0:
            phi = (e*d-1)//k
            s = n - phi + 1
            # check if the equation x^2 - s*x + n = 0
            # has integer roots
            discr = s*s - 4*n
            if(discr>=0):
                t = Arithmetic.is_perfect_square(discr)
                if t!=-1 and (s+t)%2==0:
                    print("Hacked!")
                    return d

# TEST functions

def test_hack_RSA():
    print("Testing Wiener Attack")
    times = 5
    
    while(times>0):
        #e,n,d = RSAvulnerableKeyGenerator.generateKeys(1024)
        #print("(e,n) is (", e, ", ", n, ")")
        #print("d = ", d)

	e = 160222447153262895889250928158012827757109871196102040037421857250766491575699886894325697077956068896677359953037375582060511979328323570880578946073240834317364119936983046746942944368567355131867682895196198904859001202051459879133425754080440276218324680838480108302184726980362910704693149535052743526713
	n = 356096033429997161372356441930246707554046995590506452306084931488519008238592151695866774341246347160182054216879883209187019942641996111166252052256475412435016177136773967956292472785118669272929844214105480922945372638910276569650465033695573697459823872295312452877368652943145314840314022954151337366463
 	d =0
    
        hacked_d = hack_RSA(e, n)
    
        if d == hacked_d:
            print("Hack WORKED!")
        else:
            print("Hack FAILED")
        
        print("d = ", d, ", hacked_d = ", hacked_d)
        print("-------------------------")
        times -= 1
    
if __name__ == "__main__":
    #test_is_perfect_square()
    #print("-------------------------")
    test_hack_RSA()


    


        
    
