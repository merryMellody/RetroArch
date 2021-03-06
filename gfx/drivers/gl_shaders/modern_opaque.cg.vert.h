#include "shaders_common.h"

static const char *stock_vertex_modern = CG(
   void main(
      float2 TexCoord,
      float2 VertexCoord,
      float4 Color,
      uniform float4x4 MVPMatrix,
      float4 out oPosition : POSITION,
      float2 out oTexCoord : TEXCOORD0)
   {
      oPosition = mul(float4(VertexCoord, 0.0, 1.0), MVPMatrix);
      oTexCoord = TexCoord;
   }
);
