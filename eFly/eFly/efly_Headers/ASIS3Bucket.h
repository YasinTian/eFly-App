//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface ASIS3Bucket : NSObject
{
    NSString *name;
    NSDate *creationDate;
    NSString *ownerID;
    NSString *ownerName;
}

+ (id)bucketWithOwnerID:(id)arg1 ownerName:(id)arg2;
@property(retain) NSString *ownerName; // @synthesize ownerName;
@property(retain) NSString *ownerID; // @synthesize ownerID;
@property(retain) NSDate *creationDate; // @synthesize creationDate;
@property(retain) NSString *name; // @synthesize name;
- (id)description;
- (void)dealloc;

@end

