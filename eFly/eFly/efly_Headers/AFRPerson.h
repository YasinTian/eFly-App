//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString, UIImage;

@interface AFRPerson : NSObject
{
    _Bool _registered;
    unsigned long long _Id;
    NSString *_name;
    unsigned long long _faceID;
    NSData *_faceFeatureData;
    UIImage *_faceThumb;
    unsigned long long _faceThumbWidth;
    unsigned long long _faceThumbHeight;
}

@property(nonatomic) _Bool registered; // @synthesize registered=_registered;
@property(nonatomic) unsigned long long faceThumbHeight; // @synthesize faceThumbHeight=_faceThumbHeight;
@property(nonatomic) unsigned long long faceThumbWidth; // @synthesize faceThumbWidth=_faceThumbWidth;
@property(retain, nonatomic) UIImage *faceThumb; // @synthesize faceThumb=_faceThumb;
@property(retain, nonatomic) NSData *faceFeatureData; // @synthesize faceFeatureData=_faceFeatureData;
@property(nonatomic) unsigned long long faceID; // @synthesize faceID=_faceID;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned long long Id; // @synthesize Id=_Id;
- (void).cxx_destruct;
- (void)toCDPersion:(id)arg1;
- (id)initWithCDPerson:(id)arg1;

@end

