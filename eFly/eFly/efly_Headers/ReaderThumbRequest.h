//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSObject-Protocol.h"

@class NSString, NSURL, ReaderThumbView;

@interface ReaderThumbRequest : NSObject <NSObject>
{
    NSURL *_fileURL;
    NSString *_guid;
    NSString *_password;
    NSString *_cacheKey;
    NSString *_thumbName;
    ReaderThumbView *_thumbView;
    unsigned long long _targetTag;
    long long _thumbPage;
    struct CGSize _thumbSize;
    double _scale;
}

+ (id)newForView:(id)arg1 fileURL:(id)arg2 password:(id)arg3 guid:(id)arg4 page:(long long)arg5 size:(struct CGSize)arg6;
@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
@property(readonly, nonatomic) unsigned long long targetTag; // @synthesize targetTag=_targetTag;
@property(readonly, nonatomic) NSString *thumbName; // @synthesize thumbName=_thumbName;
@property(readonly, nonatomic) struct CGSize thumbSize; // @synthesize thumbSize=_thumbSize;
@property(readonly, nonatomic) long long thumbPage; // @synthesize thumbPage=_thumbPage;
@property(retain, nonatomic) ReaderThumbView *thumbView; // @synthesize thumbView=_thumbView;
@property(readonly, nonatomic) NSString *password; // @synthesize password=_password;
@property(readonly, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(readonly, nonatomic) NSString *guid; // @synthesize guid=_guid;
- (void).cxx_destruct;
- (id)initForView:(id)arg1 fileURL:(id)arg2 password:(id)arg3 guid:(id)arg4 page:(long long)arg5 size:(struct CGSize)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

