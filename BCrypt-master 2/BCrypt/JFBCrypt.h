//


#import <Foundation/Foundation.h>

#import "JFGC.h"		// For GC related macros
#import "JFRandom.h"	// For generating random salts


/*
 * The JFBCrypt utility class.
 * This class has been tested to work on iOS 4.2.
 */
@interface JFBCrypt : NSObject {

@private
	SInt32 *_p;
	SInt32 *_s;
}

+ (NSString *) hashPassword: (NSString *) password withSalt: (NSString *) salt;
+ (NSString *) generateSaltWithNumberOfRounds: (SInt32) numberOfRounds;

@end
