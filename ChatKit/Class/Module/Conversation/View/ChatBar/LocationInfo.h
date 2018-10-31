//
//  LocationInfo.h
//  yyl
//
//  Created by 且 on 2018/10/30.
//  Copyright © 2018 lvdengtech. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LocationInfo : NSObject

@property double lat;
@property double lon;
@property (nonatomic, copy) NSString *addressNameText;
@property (nonatomic, copy) NSString *addressDetailText;

@end
