#import "CSHandle.h"

@interface XADSkipHandle:NSObject
{
}

@end

/*
#import "CSHandle.h"

@interface CSMultiHandle:CSHandle
{
	NSArray *handles;
	int currhandle;
}

+(CSHandle *)multiHandleWithHandleArray:(NSArray *)handlearray;
+(CSHandle *)multiHandleWithHandles:(CSHandle *)firsthandle,...;

-(id)initWithHandles:(NSArray *)handlearray;
-(id)initAsCopyOf:(CSMultiHandle *)other;
-(void)dealloc;

-(NSArray *)handles;

-(off_t)fileSize;
-(off_t)offsetInFile;
-(BOOL)atEndOfFile;

-(void)seekToFileOffset:(off_t)offs;
-(void)seekToEndOfFile;
-(int)readAtMost:(int)num toBuffer:(void *)buffer;

@end
*/