//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface TuSDKAOImageDecrypt : NSObject
{
    unsigned long long _pos;
    _Bool _isMatchHeader;
    NSData *_data;
}

+ (id)initWithData:(id)arg1;
@property(nonatomic) _Bool isMatchHeader; // @synthesize isMatchHeader=_isMatchHeader;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (unsigned long long)readLength;
- (void)cryptStream:(id)arg1;
- (id)imageData;
- (_Bool)matchHeader;
- (id)initWithData:(id)arg1;

@end

